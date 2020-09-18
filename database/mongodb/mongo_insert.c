#include <bson.h>
#include <mongoc.h>
#include <stdio.h>

int main (int argc, char *argv[]) 
{
	mongoc_client_t *client;
	mongoc_collection_t *collection;
	bson_error_t error;
	bson_oid_t oid;
	bson_t *doc;

	mongoc_init();

	client = mongoc_client_new ("mongodb://admin:password@172.17.0.2:27017/?appname=insert-example");
	collection = mongoc_client_get_collection (client, "mydb", "mycoll");
	
	for (int i = 0; i < 100000; i++ ) {
		 char randomletter = 'A' + (random() % 26);
		doc = bson_new ();
		bson_oid_init (&oid, NULL);
		BSON_APPEND_OID (doc, "_id", &oid);
		BSON_APPEND_UTF8 (doc, "hello", &randomletter);
	
		if (!mongoc_collection_insert_one (
			collection, doc, NULL, NULL, &error)) {
			fprintf (stderr, "%s\n", error.message);
		}
	}
	bson_destroy (doc);
	mongoc_collection_destroy (collection);
	mongoc_client_destroy (client);
	mongoc_cleanup ();

	return 0;

}


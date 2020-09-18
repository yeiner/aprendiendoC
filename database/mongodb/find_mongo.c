#include <bson.h>
#include <mongoc.h>
#include <stdio.h>

int main (int argc, char *argv[]) {
	mongoc_client_t *client;
	mongoc_collection_t *collection;
	mongoc_cursor_t *cursor;
	const bson_t *doc;
	bson_t *query;
	char *str;

	mongoc_init ();
	
	client = mongoc_client_new ("mongodb://admin:password@172.17.0.2:27017/?appname=insert-example");
	collection = mongoc_client_get_collection (client, "mydb", "mycoll");
	query = bson_new ();
	
	//Find specific row
	BSON_APPEND_UTF8 (query, "hello", "WW");

	cursor = mongoc_collection_find_with_opts (collection, query, NULL, NULL);
	
	while (mongoc_cursor_next (cursor, &doc)) {
		str = bson_as_canonical_extended_json (doc, NULL);
		printf ("%s\n", str);
		bson_free (str);
	}

	bson_destroy (query);
	mongoc_cursor_destroy (cursor);
	mongoc_collection_destroy (collection);
	mongoc_client_destroy (client);
	mongoc_cleanup ();

	return 0;

} 



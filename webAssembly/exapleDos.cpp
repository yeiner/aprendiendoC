#include <cheerp/client.h>
#include <cheerp/clientlib.h>

// We need to extend the client namespace to declare our
// custom JavaScript function
namespace client
{
// The name should be the same as the JavaScript one
// The parameters needs to be a const client::String reference
// so that implicit conversion from const char* is supported
void changeTitle(const String &str);
} // namespace client

using namespace client;

void webMain()
{
    Element *titleElement = document.getElementById("pagetitle");
    String *oldText = titleElement->get_textContent();
    changeTitle("Literal C++ string");
}
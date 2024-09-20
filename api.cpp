#include <mongocxx/client.hpp>
#include <mongocxx/instance.hpp>
#include <bsoncxx/json.hpp>
#include <bsoncxx/builder/stream/document.hpp>
#include <bsoncxx/builder/stream/helpers.hpp>
#include <mongocxx/uri.hpp>

#include <iostream>
#include <string>

using namespace mongocxx;
using namespace bsoncxx;

// Function to register a user and save it to the MongoDB database
void registerUser(const std::string& username, const std::string& password) {
    // Initialize the MongoDB driver
    instance inst;

    // Connect to the MongoDB server
    uri uri("mongodb://localhost:27017");
    client client(uri);

    // Access the database and collection
    database db = client["mydatabase"];
    collection coll = db["users"];

    // Create a BSON document with the user data
    builder::stream::document doc;
    doc << "username" << username << "password" << password;

    // Insert the document into the collection
    coll.insert_one(doc.view());

    std::cout << "User registered successfully!" << std::endl;
}

int main() {
    // Example usage
    std::string username, password;
    std::cout << "Enter username: ";
    std::cin >> username;
    std::cout << "Enter password: ";
    std::cin >> password;

    registerUser(username, password);

    return 0;
}
package main

import (
    "fmt"
    "net/http"
)

func handler(w http.ResponseWriter, r *http.Request) {
    fmt.Fprintf(w, "Hello, World! ndjkfnjkzfh ")
}

func main() {
    // Register handler function for the root URL path
    http.HandleFunc("/", handler)

    // Start the server on port 8080
    fmt.Println("Server is listening on port 8080...   22")
    err := http.ListenAndServe(":8080", nil)
    if err != nil {
        fmt.Println("Error starting server:", err)
    }
}

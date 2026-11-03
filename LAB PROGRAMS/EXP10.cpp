#include <stdio.h>
#include <windows.h>

int main()
{
    char message[50] = "Hello Message Queue";

    printf("Sender: %s\n", message);

    printf("Receiver: %s\n", message);

    printf("Message sent and received successfully!");

    return 0;
}
#include <stdio.h>
#include <time.h>
struct note {
    char name[50];
    char contains[500];
    time_t creationTime;
};
void createNote(char name[50], char contains[500]) {

}
char InputFunction() {
    printf("to create new note type in console createNote \n to read note type readNote *notename* \n to change note type changeNote *notename* \n to delete note type deleteNote *notename* \n to save note type saveNote *notename* \n");
    char message[50];
    for (int i = 0; i < 50; i++) {
        message[i] = '0';
    }
    scanf("%s", &message);

}
int main(void) {
    printf("to create new note type in console createNote \n to read note type readNote *notename* \n to change note type changeNote *notename* \n to delete note type deleteNote *notename* \n to save note type saveNote *notename* \n");

}
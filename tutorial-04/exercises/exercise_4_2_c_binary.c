/************************************************************************************
* Author: Moritz Makowski
* Lecture: MSE Informatik I - WS19/20
* Session: Tutorial 04
************************************************************************************/

/**
 *
 * @param string
 * @param length
 * @return
 */
int is_binary(char *string, int length) {
    for (int i = 0; i < length; i++) {
        char c = string[i];
        if (c == '\0') {
            break;
        } else if ((c != '0') && (c != '1')) {
            return 0;
        }
    }
    return 1;
}

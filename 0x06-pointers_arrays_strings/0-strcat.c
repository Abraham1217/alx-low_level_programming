char *_strcat(char *dest, char *src) {
    char *result = dest;
    
    // Move the pointer to the end of the destination string
    while (*dest) {
        dest++;
    }
    
    // Append the source string to the destination string
    while (*src) {
        *dest++ = *src++;
    }
    
    // Add a terminating null byte
    *dest = '\0';
    
    return result;
}




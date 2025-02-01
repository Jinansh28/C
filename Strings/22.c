#include <stdio.h>
void extract_time(unsigned short time_entry, unsigned char *hours, unsigned char *minutes, unsigned char *seconds) 
{
    *hours = (time_entry >> 11) & 0b11111;  
    *minutes = (time_entry >> 5) & 0b111111; 
    *seconds = time_entry & 0b11111; 
}

int main() {
    unsigned short time_entry;
    unsigned char hours, minutes, seconds;
    printf("Enter a two-byte time entry (0-65535): ");
    extract_time(time_entry, &hours, &minutes, &seconds);
    printf("Hours: %u, Minutes: %u, Seconds: %u\n", hours, minutes, seconds);
    return 0;
}
#include <iostream>
#include <ctime>
using namespace std;

// Format Specifier 	Description 	                            Example
// %a 	                Short representation of the weekday 	    Fri
// %b 	                Short representation of the month name 	    Dec
// %B 	                Full representation of the month name 	    December
// %d 	                Day of the month with leading zero 	        09
// %e 	                Day of the month with leading spaces 	    9
// %H 	                24-hour format of an hour 	                14
// %I 	                12-hour format of an hour 	                02
// %M 	                Minutes within an hour 	                    30
// %p 	                AM or PM 	                                PM
// %S 	                Seconds within a minute 	                01
// %y 	                2-digit year representation 	            23
// %Y 	                4-digit year representation 	            2023

int main(){
    time_t timestamp = time(NULL);
    struct tm datetime = *localtime(&timestamp);

    char output[50];

    strftime(output, 50, "%B %e, %Y", &datetime);
    cout << output << "\n";

    strftime(output, 50, "%I:%M:%S %p", &datetime);
    cout << output << "\n";

    strftime(output, 50, "%m/%d/%y", &datetime);
    cout << output << "\n";

    strftime(output, 50, "%a %b %e %H:%M:%S %Y", &datetime);
    cout << output << "\n";
    return 0;
}
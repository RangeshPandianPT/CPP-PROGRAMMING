/* Task:
Create a class for a weather forecasting system where each forecast object has the following attributes:
location
temperature
humidity
forecastDate

Key Requirements:
Static Constructor:
Used to initialize global settings for all forecast objects (e.g., default location and time zone).
Copy Constructor:
Create a new forecast object for the same location for multiple days.
Ensure the data is properly duplicated (not just referenced).

Destructor:
Used to clean up resources associated with weather data retrieval when a forecast object is no longer needed.*/

#include <iostream>
#include <string>

using namespace std;

class WeatherForecast {
private:
    string location;
    float temperature;
    float humidity;
    string forecastDate;

    static string defaultLocation;
    static string timeZone;

public:
   
    static void initializeGlobalSettings(const string& loc, const string& tz) {
        defaultLocation = loc;
        timeZone = tz;
        cout << "Global settings initialized: Location = " << defaultLocation << ", Time Zone = " << timeZone << endl;
    }

    
    WeatherForecast(string loc = defaultLocation, float temp = 0.0, float hum = 0.0, string date = "")
        : location(loc), temperature(temp), humidity(hum), forecastDate(date) {}

    
    WeatherForecast(const WeatherForecast& wf) {
        location = wf.location;
        temperature = wf.temperature;
        humidity = wf.humidity;
        forecastDate = wf.forecastDate;
        cout << "Copy constructor called for location: " << location << " on date: " << forecastDate << endl;
    }

    
    ~WeatherForecast() {
        cout << "Destructor called for forecast of " << location << " on " << forecastDate << endl;
    }

    void display() const {
        cout << "Location: " << location << ", Temp: " << temperature
             << "°C, Humidity: " << humidity << "%, Date: " << forecastDate
             << ", Time Zone: " << timeZone << endl;
    }
};


string WeatherForecast::defaultLocation = "Unknown";
string WeatherForecast::timeZone = "UTC";


int main() {
    
    WeatherForecast::initializeGlobalSettings("Bangalore", "IST");

   
    WeatherForecast today("Bangalore", 30.5, 65, "2025-05-04");
    today.display();

    
    WeatherForecast tomorrow = today;
    tomorrow = WeatherForecast(today);  
    tomorrow.display();

    return 0;
}

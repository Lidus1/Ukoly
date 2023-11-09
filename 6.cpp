#include <iostream>
#include <string>
#include <list>
#include <fstream>
#include <sstream>
#include <algorithm>


using namespace std;

struct Time { 

int minute; 
int hour; 
int day; 
int month; 
int year; 

 

Time(); 

Time(std::string time)
// čas bude ve formátu "2023 1 10 20 53"
{
    year = stoi(time.substr(0, 4));
    month = stoi(time.substr(5, 2));
    day = stoi(time.substr(8, 2));
    hour = stoi(time.substr(11, 2));
    minute = stoi(time.substr(14, 2));
}


bool operator < (const Time& obj)
{
    if (year < obj.year)
    {
        return true;
    }
    else if (year == obj.year)
    {
        if (month < obj.month)
        {
            return true;
        }
        else if (month == obj.month)
        {
            if (day < obj.day)
            {
                return true;
            }
            else if (day == obj.day)
            {
                if (hour < obj.hour)
                {
                    return true;
                }
                else if (hour == obj.hour)
                {
                    if (minute < obj.minute)
                    {
                        return true;
                    }
                }
            }
        }
    }
    return false;


}


bool operator > (const Time& obj)
{
    if (year > obj.year)
    {
        return true;
    }
    else if (year == obj.year)
    {
        if (month > obj.month)
        {
            return true;
        }
        else if (month == obj.month)
        {
            if (day > obj.day)
            {
                return true;
            }
            else if (day == obj.day)
            {
                if (hour > obj.hour)
                {
                    return true;
                }
                else if (hour == obj.hour)
                {
                    if (minute > obj.minute)
                    {
                        return true;
                    }
                }
            }
        }
    }
    return false;


}

bool operator == (const Time& obj)
{
    if (year == obj.year)
    {
        if (month == obj.month)
        {
            if (day == obj.day)
            {
                if (hour == obj.hour)
                {
                    if (minute == obj.minute)
                    {
                        return true;
                    }
                }
            }
        }
    }
    return false;
}


bool operator != (const Time& obj)
{
    if (year != obj.year)
    {
        return true;
    }
    else if (month != obj.month)
    {
        return true;
    }
    else if (day != obj.day)
    {
        return true;
    }
    else if (hour != obj.hour)
    {
        return true;
    }
    else if (minute != obj.minute)
    {
        return true;
    }
    return false;
}

 

friend std::ostream& operator << (std::ostream& out, const Time& obj)
{
    out << obj.year << " " << obj.month << " " << obj.day << " " << obj.hour << " " << obj.minute;
    return out;
}



}; 

class Event 

{ 

private: 

std::string name; 

Time start_time; 

Time end_time; 

std::string place; 

std::string description; 

 

public: 

Event(std::string event)
// událost bude ve formátu "název události endline datum začátku události endline datum konce události endline místo konání události endline poznámka endline"
{
    name = event.substr(0, event.find("\n"));
    start_time = Time(event.substr(event.find("\n") + 1, event.find("\n") + 20));
    end_time = Time(event.substr(event.find("\n") + 21, event.find("\n") + 41));
    place = event.substr(event.find("\n") + 42, event.find("\n") + 50);
    description = event.substr(event.find("\n") + 51, event.find("\n") + 100);
}

Event(std::string name, std::string start_time, std::string end_time, std::string place, std::string description)
{
    this->name = name;
    this->start_time = Time(start_time);
    this->end_time = Time(end_time);
    this->place = place;
    this->description = description;
}

bool operator < (const Event& obj) const
{
    if (start_time < obj.start_time)
    {
        return true;
    }
    else if (start_time == obj.start_time)
    {
        if (end_time < obj.end_time)
        {
            return true;
        }
        else if (end_time == obj.end_time)
        {
            if (name < obj.name)
            {
                return true;
            }
        }
    }
    return false;
}

bool operator > (const Event& obj) const
{
    if (start_time > obj.start_time)
    {
        return true;
    }
    else if (start_time == obj.start_time)
    {
        if (end_time > obj.end_time)
        {
            return true;
        }
        else if (end_time == obj.end_time)
        {
            if (name > obj.name)
            {
                return true;
            }
        }
    }
    return false;
}

bool operator == (const Event& obj) const
{
    if (start_time == obj.start_time)
    {
        if (end_time == obj.end_time)
        {
            if (name == obj.name)
            {
                return true;
            }
        }
    }
    return false;
}

bool operator != (const Event& obj) const
{
    if (start_time != obj.start_time)
    {
        return true;
    }
    else if (end_time != obj.end_time)
    {
        return true;
    }
    else if (name != obj.name)
    {
        return true;
    }
    return false;
}

 

friend std::ostream& operator << (std::ostream& out, const Event& obj)
{
    out << obj.name << std::endl << obj.start_time << std::endl << obj.end_time << std::endl << obj.place << std::endl << obj.description << std::endl;
    return out;
}



}; 

class Calendar 

{ 

private: 

std::string name; 
std::string path; 
std::list<Event> events; 

 
public: 

Calendar(std::string name)
{
    this->name = name;
}

Calendar(std::string name, std::string path)
{
    this->name = name;
    this->path = path;
}

void addEvent(Event event)
{
    events.push_back(event);
    events.sort();
}

Calendar findEvent(std::string name)
// najde event podle jména
{
    Calendar c = Calendar("TEST");
    for (Event e : events)
    {
        if (e.name == name)
        {
            c.addEvent(e);
        }
    }
    return c;
}

Calendar findEventsAfter(Time time)
{
    Calendar c = Calendar("TEST");
    for (Event e : events)
    {
        if (e.start_time > time)
        {
            c.addEvent(e);
        }
    }
    return c;
}

Calendar findEventsBefore(Time time)
{
    Calendar c = Calendar("TEST");
    for (Event e : events)
    {
        if (e.start_time < time)
        {
            c.addEvent(e);
        }
    }
    return c;
}

 

friend std::ostream& operator << (std::ostream& out, const Calendar& obj)
{
    out << obj.name << std::endl;
    for (Event e : obj.events)
    {
        out << e;
    }
    return out;
}




int main() 

{ 

    Time t = Time("2023 1 10 20 53"); 

    std::cout << t << std::endl;
 
    Event e = Event("Presentation","2023 2 2 14 00","2023 2 2 16 15","S9A/67","Information technology presentation.Complete projects and tasks"); 

    Calendar c = Calendar("TEST", "events.txt"); 

    std::cout << c << std::endl; 

 

    c.addEvent(e); 

 

    Event e1 = Event("Launch", "2023 3 2 12 00", "2023 3 2 13 00", "Canteen", " Enjoy your meal."); 

    c.addEvent(e1); 

    std::cout << c << std::endl; 

 

    std::cout << c.findEvent("Exam") << std::endl; 

 

    std::cout << c.findEventsAfter(Time("2023 3 2 15 40")) << std::endl; 

    std::cout << c.findEventsBefore(Time("2023 3 2 8 00")) << std::endl;
    
    return 0;


}

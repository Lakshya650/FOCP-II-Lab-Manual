#include<iostream>
using namespace std;

class MovieTicket{
    string moviename;
    int seatNumber;
    int ticketPrice;
    bool isBooked;
    public:
    MovieTicket();       //default constructor
    MovieTicket(string,int,int);   //parameterised constructor
    void bookTicket();
    void cancelTicket();
    void displayTicketDetails();
    void calculateTotalCost(int numberOfTickets);
};

MovieTicket::MovieTicket(){
    isBooked=false;
    ticketPrice=200;
}
MovieTicket::MovieTicket(string mn,int stn,int price){
    moviename=mn;
    seatNumber=stn;
    ticketPrice=price;
}
void MovieTicket::bookTicket(){
    isBooked=true;
}
void MovieTicket::cancelTicket(){
    isBooked=false;
}

void MovieTicket::displayTicketDetails(){
    cout<<"\nMovie Name: "<<moviename<<endl;
    cout<<"Booking Status: "<<(isBooked? "Confirmed":"Cancelled")<<endl;
    cout<<"Seat Number: "<<seatNumber<<endl;
    cout<<"Ticket Price: "<<ticketPrice<<endl;
}

int main(){
    MovieTicket m1("Dhurandhar:The Revenge",123,300);
    m1.bookTicket();
    m1.displayTicketDetails();
    
    MovieTicket m2("Dhurandhar",224,300);
    m2.cancelTicket();
    m2.displayTicketDetails();
    
    MovieTicket m3("Dhurandhar:The Revenge",125,300);
    m3.bookTicket();
    m3.displayTicketDetails();
    return 0;
}




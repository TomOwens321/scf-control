#ifndef __SCF__
#define __SCF__

class BasicController {
    
    private:
    // member vars
    int sensPin, outPin;

    public:
    // setters and getters
    void setSensPin(int pin) {sensPin = pin;}
    void setOutPin(int pin)  {outPin = pin;}
    int  getSensPin() {return sensPin;}
    int  getOutPin()  {return outPin;}

    // constructors and destructors
    BasicController(int, int);
    ~BasicController();
};

#endif
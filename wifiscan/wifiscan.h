typedef struct{
    unsigned char MAC[6];
    int channel;
    double frequency;
    char essid[100];
    double slevel;
}WIFI_info;

#define CMD "sudo iwlist wlan0 scan | \"Address|Frequency|ESSID|Quality\" > scan.txt"

//function prototypes
void read_data(void);
void removepaces(char []);
void get_MAC(char [],char []);
double get_frequency(char []);
int get_channel(char []);
double get_slevel(char []);
void get_essid(char [], char []);

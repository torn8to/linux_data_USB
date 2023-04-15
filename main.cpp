#include <iostream>
#include <stdio.h>
#include <libserial/SerialPort.h>

using namespace LibSerial;

int BUFFER_SIZE = 256;
int float_resolution = 6;



 void write_robot_message( char robot_id, float fl_speed, float fr_speed, float bl_speeds, float br_speeds, char enable_dribbler, char fire_kicker , buffer)
{
    char message[BUFFER_SIZE];
    char fl_char[float_resolution];
    char fr_char[float_resolution];
    char bl_char[float_resolution];
    char br_char[float_resolution];
    gcvt(fl_speed,float_resolution,fl_char);
    gcvt(fl_speed,float_resolution,fl_char);
    gcvt(fl_speed,float_resolution,fl_char);
    gcvt(fl_speed,float_resolution,fl_char);
    //TODO compose message

    return message
}
int main() {
    // create a serial stream and open the port
    SerialStream robot_radio("/dev/ttyUSB0");
    char output_buffer[BUFFER_SIZE];
    //set_baud_rate
    robot_radio.SetBaudRate(BAUD_115200);
    // set the character size
    robot_radio.setCharacterSize(CHAR_SIZE_8);
    //set parity
    robot_radio.SetParity(PARITY_ODD);

    my_serial_stream.write( output_buffer, BUFFER_SIZE );

    output_buffer = write_robot_message(1,.5,.5,.5,.5,124,1);


    robot_radio.Close();
}

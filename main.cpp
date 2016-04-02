#include "opencv2/objdetect/objdetect.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"

#include <iostream>

using namespace std;
using namespace cv;


String window_name = "Capture - Face detection";


int main( void )
{
    VideoCapture capture;
    capture.open(0);
    Mat frame;
    if ( ! capture.isOpened() )
    {
        printf("Video Capturing not opened \n");
        return -1;
    }
    while ( capture.read(frame) )
    {
        if( frame.empty() )
        {
            printf("No frames available !");
            break;
        }
        int c = waitKey(10);
        imshow( window_name, frame );
        if( (char)c == 27 )
        {
            break;
        }
    }
    return 0;
}


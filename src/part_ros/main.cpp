#include "ros/ros.h"
#include "zhichuanlen_semetic_gmapping.h"

int main(int argc, char ** argv)
{
    ros::init(argc, argv, "zhichuanlen_semetic_gmapping");

    MySlamGMapping slamer;
    slamer.startLiveSlam();    
    ros::spin();
    
    return 0;
}
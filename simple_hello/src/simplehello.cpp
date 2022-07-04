#include <gazebo/common/Plugin.hh>

#include <rclcpp/rclcpp.hpp>
#include <iostream>

namespace gazebo
{

    class WorldPluginTutorial : public gazebo::ModelPlugin
    {

    public:
        WorldPluginTutorial() : gazebo::ModelPlugin()
        {
            RCLCPP_INFO(rclcpp::get_logger("gazeboplugin"), "In constructor of the plugin");
        }
        void Load(gazebo::physics::ModelPtr _world, sdf::ElementPtr _sdf)
        {
            if (!rclcpp::ok)
            {
                RCLCPP_INFO(rclcpp::get_logger("gazeboplugin"), "Rclcpp issue");
                return;
            }
            
            RCLCPP_INFO(rclcpp::get_logger("gazeboplugin"), "Service plugin deployed in the simulation world");
        }

    };
    GZ_REGISTER_MODEL_PLUGIN(WorldPluginTutorial)
}
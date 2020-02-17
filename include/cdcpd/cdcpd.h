#pragma once

#include <opencv2/core.hpp>
#include <pcl/point_types.h>
#include <pcl/io/pcd_io.h>

pcl::PointCloud<pcl::PointXYZ>::Ptr cdcpd(
        const cv::Mat& rgb, 
        const cv::Mat& depth,
        const cv::Mat& mask,
        const cv::Mat& intrinsics
        );

#include <fmt/core.h>
#include <opencv2/opencv.hpp>

int main(int argc, char** argv)
{
  if (argc != 2)
  {
    fmt::print("usage: DisplayImage.out <Image_Path>\n");
    return -1;
  }

  cv::Mat image = cv::imread(argv[1], cv::IMREAD_COLOR);

  if (!image.data)
  {
    fmt::print("No image data \n");
    return -1;
  }

  constexpr auto window_name = "Hello CV";
  cv::namedWindow(window_name, cv::WINDOW_AUTOSIZE);
  cv::imshow(window_name, image);
  cv::waitKey(0);

  return 0;
}

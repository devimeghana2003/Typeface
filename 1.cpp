cv::cvtColor(img, gray, CV_BGR2GRAY);
std::vector<cv::Point> points;
cv::Mat_<uchar>::iterator it = gray.begin<uchar>();
cv::Mat_<uchar>::iterator end = gray.end<uchar>();
for (; it != end; ++it)
{
    if (*it) points.push_back(it.pos());
}
cv::RotatedRect box = cv::minAreaRect(cv::Mat(points));
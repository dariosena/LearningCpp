#include "video.h"

namespace ns3 {

Video::Video (std::string filename)
{
	this->filename = filename;
}

void Video::SetFilename(std::string filename)
{
	this->filename = filename;
}

std::string Video::GetFilename()
{
	return this->filename;
}

} // namespace ns3

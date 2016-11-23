
namespace ns3 {

class Video
{
public:
    Video(std::string filename);
    void SetFilename(std::string filename);
    std::string GetFilename(void);

private:
    std::string filename;
};

} // namespace ns3

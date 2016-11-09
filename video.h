
class Video
{
public:
    Video(std::string filename);
    void SetFilename(std::string filename);
    std::string GetFilename();

private:
    std::string filename;
};

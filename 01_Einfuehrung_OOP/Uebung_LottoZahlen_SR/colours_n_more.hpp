#if defined(WIN32) || defined(_WIN32) || defined(__WIN32__) || defined(__NT__)
    const std::string OS = "win";
#elif __linux__
    const std::string OS = "linux";
#elif __unix__
    const std::string OS = "unix";
#else
#   error "Unknown Compiler"
#endif

#define RESET   "\033[0m"
#define BLACK   "\033[30m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"
#define BOLD    "\033[1m"


void clearScreen()
{
    if(OS == "win")
    {
        system("cls");
    } else if (OS == "linux" || OS == "unix")
    {
        system("clear");
    }
}

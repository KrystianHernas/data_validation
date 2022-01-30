std::string inputString() {
    std::string path;
    std::cout << "Input string" << std::endl; std::cin >> path; 
    try { 
        if (path.size() < 2 || path.size()>1000000 || std::cin.fail()) {
            throw std::invalid_argument("Out of range/not a proper format."); 
        } 
    }
    catch (std::invalid_argument& e) {
        std::cerr << e.what() << std::endl;
    }
    return path;
};

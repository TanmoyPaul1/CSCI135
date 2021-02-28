            #include <iostream>
    #include <string>
//comment
        std::string removeLeadingSpaces(std::string line)
                {
                    while (line[0] == ' ')
        {
    line = line.substr(1);
               }
        //comment 2
            return line;
}

#include <iostream>

                            int countChar(std::string line, char c)
    {
        //comment 3
                if (line[0] == c)
        {
                    return 1;
}
            return 0;
    }
                        //comment 4
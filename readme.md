| Brionna Franklin|
| :---              |
| s198017          |
| Assessment 3 - TikTakToe|
| TikTakToe Documentation |

## I. Design

1. Object Information

    **File**: HashFunction.h

        Description: generates a random id number consistly based on input

            Operations:
                
                -Name: badHash
                Description: implementation of a basic addition hash
                Type: unsigned int
                Visibility: private
                
                -Name: BKDRHash
                Description: hash function by brian kernighan and dennis ritchie
                Type: unsigned int
                Visibility: private
                
                -Name: colorHash
                Description: custom hash
                Type: unsigned int
                Visibility: private
                
                -Name: briColorHash
                Description: Fun custom hash
                Type: unsigned int
                Visibility: private
                
            Attributes:
                
                -Name: HashFunc
                Description: default hash function
                Type: typedef
                Visibility: private
                
                -Name: defaultHash
                Description: a helper to access a default hash function
                Type: static
                Visibility: private
                
    **File**: main.cpp

        Description: Where main functions are called; runs on start up

            Operations:
                
                -Name: main
                Description: the only function in main.cpp; runs on start up
                Type: int
                Visibility: private
                
## License

MIT License - Copyright (c) 2018 Academy of Interactive Entertainment

For more information, see the [license][lic] file.

Third party works are attributed under [thirdparty.md][3p].

[lic]:license.md
[3p]:thirdparty.md
[raylib]:https://github.com/raysan5/raylib

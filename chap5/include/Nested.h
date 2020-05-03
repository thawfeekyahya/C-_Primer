#ifndef NESTED_H
#define NESTED_H

class Nested {
	public:
		Nested();
        private:
                void arrayStrings();
                static const int  nameCount = 5;


                const char* names[nameCount] = {
                        "Sarah hannef",
                        "Thawfeek Yahya",
                        "Yasmin Begam"
                };

};

#endif // NESTED_H

#ifndef STRUCTVARIATIONS_H
#define STRUCTVARIATIONS_H
#include <string>

class StructVariations {

	public:
		StructVariations();

        private:
                struct TestStrcut {
                    int id;
                    std::string name;
                };

                TestStrcut structArr[3];
       
};



#endif // STRUCTVARIATIONS

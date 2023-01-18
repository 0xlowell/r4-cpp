//
// Created by Lo on 18/01/2023.
//

#include <iostream>
#include <cstdint>

struct Data {
	int v;
};

uintptr_t	serialize(Data *ptr) {
	std::cout << "Return <unitptr_t> value from <Data *> -> serialize ✅ " << std::endl;
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*deserialize(uintptr_t value) {
	std::cout << "Return <Data *> value from <unitptr_t> -> deserialize ✅ " << std::endl;
	return (reinterpret_cast<Data *>(value));
}

int	main(void) {
	uintptr_t 	ptr;
	Data		d;
	Data		*dd;

	d.v = 1;
	std::cout << "Before cast - in d.v :" << d.v << std::endl;


	std::cout << "Data = " << &d << std::endl;
	ptr = serialize(&d);
//	std::cout << "unitptr_t ptr = " << ptr << std::endl;
	dd = deserialize(ptr);
	std::cout << "Data *dd = " << dd << std::endl;

	std::cout << "After cast - in d.v :" << d.v << std::endl;
	std::cout << "After cast - in dd->v :" << dd->v << std::endl;

	if (dd == &d)
		std::cout << "dd == &d ✅ " << std::endl;
	else
		std::cout << "Something went wrong ❌ " << std::endl;
	return (0);
}

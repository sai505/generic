struct add {
	int first;
	int second;
};

template< // Declares pair to be a template
  typename T, // T is a template (type) parameter
  typename U // U is a type parameter
  >
struct pair {
  T first;
  U second;
};


int main() {


  // Supplying arguments to a template causes it to be
  // *instantiated*.
 // pair< // Pair is a template.
 //   int, // Int is a template argument
 //   bool> // bool is a template argument.
 // p1;
  // The instantiated type of p1 is below.

  add a = {1,2};

  pair<int, int> p1;


}

// Instantiation generates a specialization. For
// the type pair<int, bool>.
// template<>
// struct pair<int, bool> {
//   int first;
//   bool second;
// }

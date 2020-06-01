// Virtual keyword => may be defined later
// =0 syntax below is pure virtual
// A Class with pure virtual function is a abstract class
class Container {
	public:
		virtual double& operator[](int) = 0; // Pure Virtual Function
		virtual int size() const = 0; // Constant Member Function
		virtual ~Container() {} // Destructor
};

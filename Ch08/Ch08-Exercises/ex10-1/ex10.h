const float PI = 3.1415F;

class Polar
{
private:
	float r;
	float phi;
	float grad;
	float x, y;
public:
	Polar () : r(0), phi(0)
	{}
	void getp();
	void putp();
	void putxy();
	float rad_to_grad();
	float grad_to_rad();
	void pol_to_xy();
	void xy_to_pol();
	Polar operator + ( Polar );
};

class Anfibio : public Animal
{
private:
	int total_mudas;
	std::string ultima_muda;

public:
	Anfibio();
	~Anfibio();
	
};

class Mamifero : public Animal
{
private:
	std::string cor_pelo;

public:
	Mamifero();
	~Mamifero();
	
};

class Reptil : public Animal
{
private:
	bool venenoso;
	std::string tipo_veneno;

public:
	Reptil();
	~Reptil();
	
};

class Ave : public Animal
{
private:
	int tamanho_bico;
	int envergadura;

public:
	Ave();
	~Ave();
	
};

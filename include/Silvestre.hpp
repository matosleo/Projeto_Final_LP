class AnimalSilvestre
{
private:
	std::string ibama;

public:
	AnimalSilvestre();
	~AnimalSilvestre();
	
};

class Nativo : public AnimalSilvestre
{
private:
	std::string uf_origem;
	std::string autorizacao;

public:
	Nativo();
	~Nativo();
	
};

class Exotico : public AnimalSilvestre
{
private:
	std::string pais_origem;

public:
	Exotico();
	~Exotico();
	
};

class Funcionario
{
private:
	int 		m_id;
	std::string m_nome;
	std::string m_CPF;
	short 		m_idade;
	short 		m_tipo_sangue;		// A / B / AB / O
	short 		m_fator_RH;			// + / -
	std::string m_especialidade;

public:
	Funcionario();
	~Funcionario();
	
};

class Veterinario : public Funcionario
{
public:
	Veterinario();
	~Veterinario();
	
};

class Tratador : public Funcionario
{
public:
	Tratador();
	~Tratador();
	
};



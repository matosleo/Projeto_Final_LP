class Animal
{
private:
	int 		m_id;
	std::string m_classe;
	std::string m_nome;
	std::string m_cientifico;
	char 		m_sexo;
	float 		m_tamanho;
	std::string m_dieta;
	Veterinario m_veterinario;
	Tratador 	m_tratador;
	std::string m_batismo;

public:
	Animal();
	~Animal();
	
};
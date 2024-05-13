# Aula 12


|Correção do Desafio|
|-|
|Criar um programa em HTML, CSS e JS que substirua a planilha em excel com as seguintes funcionalidades/requisitos funcionais e não funcionais||-|
|RN001 - Linguagem HTML, CSS e JS|_Essencial_|
|RN002 - Programação estrutural e funcional|_Essencial_|
|**Funcionais**|**Prioridades**|
|RF001 - 1.Novo investimento, 2. Concluir investimento, 3. Listar todos os Investimentos, 4.Listar Carteira Ativa, 5. Sair|_Essencial_|
|RF003 - Cadastrar investimento com os campos investimento, dataInício, valorInvestido, precoEntrada, metaGanho, limitePerda|_Esencial_|
|RF004 - Concluir investimento preenchendo o valorAtual e mostrando o valor do retorno final e se houve lucro ou prejuíso|_Esencial_|
|RF005 - Listar todos os investimendos calculando os ganhos e perdas conforme a planilha, solicitando o valorAtual dos investimentos ativos|_Importante_|
|RF006 - Listar carteira ativa. Listar somente os investimentos que não foram concluídos, solicitando o valorAtual|_Desejável_|

## Segurança cibernética
    6.1. Definição
    6.2. Ameaças
    6.3. Vulnerabilidades
    6.4. Credenciais
    6.5. Engenharia Social
    6.6. Intervenções
    6.6.1.Proteção
    6.6.2.Prevenção

## Definição de Segurança Cibernética
- A definição de Segurança Cibernética refere-se ao conjunto de práticas, tecnologias, políticas e procedimentos projetados para proteger sistemas de computador, redes, dispositivos e dados contra ataques, danos, acesso não autorizado, roubo ou qualquer outra forma de intrusão digital. Em essência, a segurança cibernética visa garantir a integridade, confidencialidade e disponibilidade das informações e recursos digitais.

## Importância da Segurança Cibernética
- A importância da segurança cibernética reside no fato de que vivemos em uma era altamente digitalizada, onde quase todos os aspectos de nossas vidas estão interligados por meio de tecnologia. Desde informações pessoais e financeiras até infraestruturas críticas e sistemas governamentais, praticamente tudo está armazenado, transmitido e processado digitalmente. Portanto, a segurança cibernética desempenha um papel crucial em proteger esses ativos digitais contra uma ampla gama de ameaças, incluindo:
- Proteção de Dados Sensíveis: A segurança cibernética protege informações pessoais, financeiras e comerciais contra acesso não autorizado, roubo e exploração.
- Garantia da Continuidade dos Negócios: Ataques cibernéticos podem interromper operações comerciais, resultando em perda de receita, danos à reputação e custos de recuperação.
- Preservação da Privacidade: A segurança cibernética ajuda a preservar a privacidade dos usuários, garantindo que suas informações não sejam comprometidas ou exploradas indevidamente.
- Proteção de Infraestrutura Crítica: Sistemas de energia, transporte, saúde e outras infraestruturas críticas dependem da segurança cibernética para evitar interrupções que poderiam ter consequências catastróficas.
- Segurança Nacional: A segurança cibernética é fundamental para proteger os interesses nacionais contra ameaças cibernéticas, incluindo espionagem, sabotagem e guerra cibernética.
### Breve História e Evolução da Segurança Cibernética:
- A história da segurança cibernética remonta aos primeiros dias da computação, quando os sistemas eram muito menos complexos e as ameaças eram menos sofisticadas. Aqui está uma breve visão geral da evolução da segurança cibernética:

- Década de 1970: Os primeiros sistemas de computador eram vulneráveis a ataques simples, como invasões de senha e vírus de computador rudimentares.

- Década de 1980: Com o aumento da conectividade entre sistemas, surgiram os primeiros worms e malware capazes de se espalhar pela rede.

- Década de 1990: O crescimento da internet trouxe consigo novos desafios de segurança, incluindo ataques de negação de serviço (DDoS) e o surgimento do crime cibernético organizado.

- Década de 2000: A segurança cibernética tornou-se uma preocupação global à medida que ataques cibernéticos de alto perfil, como o worm "I Love You" e os ataques de 11 de setembro, destacaram a vulnerabilidade de sistemas críticos.

- Década de 2010: O aumento do uso de dispositivos móveis, computação em nuvem e IoT introduziu novos vetores de ataque, enquanto regulamentações como o GDPR e o aumento da conscientização sobre segurança cibernética impulsionaram a adoção de melhores práticas de segurança.

- Década de 2020: A segurança cibernética tornou-se ainda mais complexa com o surgimento de ameaças como ransomware, ataques de supply chain e inteligência artificial aplicada a ciberataques, destacando a necessidade contínua de inovação e vigilância em segurança cibernética.

## Ameaças Cibernéticas:

- a) Malware: É um termo genérico que engloba vários tipos de software malicioso, como vírus, worms, trojans, ransomware e spyware.
- b) Phishing: É uma técnica usada por cibercriminosos para enganar usuários e obter informações confidenciais, como senhas e informações de cartão de crédito. Isso geralmente é feito através de e-mails, mensagens de texto ou sites falsos que se passam por legítimos.
- c) Ataques de Negação de Serviço (DDoS): Nesses ataques, os hackers inundam um sistema, rede ou serviço com uma quantidade esmagadora de tráfego de dados, tornando-o inacessível para usuários legítimos. Isso pode causar interrupções graves nos negócios e serviços online.
- d) Ataques de Engenharia Social: Esses ataques exploram a psicologia humana para enganar as pessoas a divulgar informações confidenciais ou realizar ações prejudiciais. Isso pode incluir técnicas como pretexting, onde os hackers criam uma história falsa para obter acesso a informações, ou tailgating, onde eles se aproveitam da cortesia para ganhar acesso físico a instalações seguras.

## 2. Exemplos Reais de Ataques Cibernéticos e Suas Consequências:
- Ataque de Ransomware WannaCry em 2017: Este ataque infectou centenas de milhares de computadores em todo o mundo, criptografando seus dados e exigindo um resgate em Bitcoin para restaurá-los. Isso causou grandes interrupções em hospitais, empresas e serviços governamentais, resultando em perdas financeiras e danos à reputação.

- Ataque de Phishing à Equifax em 2017: Neste caso, os hackers exploraram uma vulnerabilidade no site da Equifax para obter acesso a informações pessoais de mais de 143 milhões de pessoas. Isso resultou em um dos maiores vazamentos de dados da história e teve sérias repercussões para a empresa e seus clientes.

- Ataque DDoS à Dyn em 2016: Este ataque mirou o provedor de serviços de DNS Dyn, causando interrupções em grandes sites como Twitter, Netflix e Amazon. O ataque destacou a vulnerabilidade da infraestrutura de internet centralizada e ressaltou os riscos associados aos ataques DDoS.

## O que são Vulnerabilidades Cibernéticas
- Vulnerabilidades cibernéticas referem-se a fraquezas ou falhas em sistemas de computador, redes, aplicativos ou dispositivos que podem ser exploradas por atacantes para comprometer a segurança e causar danos. Essas vulnerabilidades podem surgir devido a erros de programação, configurações inadequadas, falta de atualizações de segurança, uso de software desatualizado ou outras falhas no design ou implementação de sistemas tecnológicos.

## Tipos Comuns de Vulnerabilidades:
- a) Falhas de Software: Erros de programação, também conhecidos como bugs, podem criar vulnerabilidades que podem ser exploradas por atacantes para executar código malicioso, obter acesso não autorizado ou causar interrupções nos sistemas. Exemplos incluem buffer overflows, injection attacks (como SQL injection) e deserialization vulnerabilities.

- b) Configurações Inadequadas: Configurações incorretas ou padrões de segurança fracos podem deixar sistemas e redes vulneráveis a ataques. Isso pode incluir deixar portas de rede abertas, usar senhas fracas, não implementar firewalls ou não aplicar políticas de segurança adequadas.

- c) Falta de Atualizações de Segurança: Software desatualizado pode conter vulnerabilidades conhecidas que foram corrigidas em versões mais recentes. Se os sistemas não forem atualizados regularmente, eles permanecerão vulneráveis a ataques que exploram essas falhas.

## Credenciais de Acesso:

- Credenciais de acesso são informações usadas para verificar a identidade de um usuário e conceder acesso a sistemas, redes ou aplicativos. Elas geralmente consistem em um nome de usuário e uma senha, mas também podem incluir outras formas de autenticação, como tokens de segurança ou biometria.

## Métodos de Autenticação:

- a) Senhas: Senhas são a forma mais comum de credenciais de acesso e geralmente consistem em uma combinação de letras, números e caracteres especiais. No entanto, senhas podem ser vulneráveis a ataques de força bruta ou engenharia social se não forem suficientemente complexas ou exclusivas.

- b) Autenticação de Dois Fatores (2FA): A autenticação de dois fatores adiciona uma camada extra de segurança exigindo que os usuários forneçam não apenas uma senha, mas também um segundo fator de autenticação, como um código enviado por SMS, um token de segurança ou uma impressão digital.

- c) Biometria: A autenticação biométrica utiliza características físicas únicas, como impressões digitais, reconhecimento facial ou íris, para verificar a identidade de um usuário. Embora seja altamente segura, a biometria pode ser difícil de implementar e pode apresentar desafios de privacidade.
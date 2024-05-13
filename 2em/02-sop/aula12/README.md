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

## Engenharia Social

- Engenharia social é uma técnica utilizada por atacantes para manipular pessoas a fim de obter informações confidenciais, acesso a sistemas ou realizar ações prejudiciais. 

- a) Phishing: Phishing é uma técnica em que os atacantes enviam mensagens de e-mail, mensagens de texto ou mensagens instantâneas disfarçadas de comunicações legítimas de empresas ou contatos conhecidos. Essas mensagens geralmente solicitam informações confidenciais, como senhas, números de cartão de crédito ou detalhes de conta, ou contêm links maliciosos que direcionam os usuários a sites fraudulentos.

- b) Pretexting: Pretexting envolve a criação de uma história ou pretexto falso para manipular as vítimas a compartilhar informações confidenciais ou realizar ações indesejadas. 

- c) Tailgating: Tailgating, também conhecido como "piggybacking", é uma técnica física em que um invasor segue de perto um funcionário autorizado para entrar em uma área restrita de uma instalação segura. Isso explora a cortesia humana e a relutância em confrontar estranhos para ganhar acesso não autorizado a instalações protegidas. 

## Proteção
- Objetivo: Explorar as medidas proativas que podem ser tomadas para proteger sistemas e dados contra ameaças cibernéticas.
- 1. Implementação de Firewalls e Antivírus:

        - Firewalls: Firewalls são dispositivos ou programas que atuam como uma barreira entre uma rede interna e a internet, controlando o tráfego de entrada e saída com base em regras de segurança. Eles ajudam a bloquear ameaças conhecidas e não autorizadas, como malware, vírus e ataques de negação de serviço.

        - Antivírus: Os programas antivírus são projetados para detectar, prevenir e remover software malicioso de computadores e dispositivos. Eles escaneiam arquivos em busca de padrões de código malicioso e os isolam ou removem para proteger o sistema contra infecções.
- 2. Atualizações Regulares de Software e Patches de Segurança:

        - Atualizações de Software: Fornecedores de software regularmente lançam atualizações para corrigir falhas de segurança conhecidas, chamadas de vulnerabilidades. Manter todos os programas e sistemas operacionais atualizados com as últimas versões é essencial para proteger contra explorações de vulnerabilidades conhecidas por hackers.

        - Patches de Segurança: Patches de segurança são pequenas atualizações projetadas especificamente para corrigir vulnerabilidades de segurança específicas. Eles são lançados rapidamente em resposta a ameaças emergentes e devem ser aplicados imediatamente para proteger contra explorações de vulnerabilidades conhecidas.
- 3. Monitoramento de Rede e Detecção de Intrusões:

        - Monitoramento de Rede: O monitoramento contínuo da rede permite identificar padrões incomuns ou atividades suspeitas que possam indicar uma possível violação de segurança. Isso inclui a análise de logs de segurança, tráfego de rede e comportamento do sistema em busca de sinais de atividade maliciosa.

        - Detecção de Intrusões: Os sistemas de detecção de intrusões (IDS) e os sistemas de prevenção de intrusões (IPS) são projetados para identificar e responder a atividades maliciosas em tempo real. Eles analisam o tráfego de rede em busca de padrões suspeitos ou assinaturas de ataques conhecidos e podem tomar medidas para bloquear ou mitigar essas ameaças automaticamente.

## Prevenção
- Objetivo: Discutir estratégias para prevenir ataques cibernéticos antes que eles ocorram, incluindo conscientização e treinamento de usuários.

- 1. Conscientização sobre Segurança Cibernética:

        - Conscientização sobre segurança cibernética é a compreensão dos riscos, ameaças e melhores práticas relacionadas à segurança da informação. Isso envolve educar usuários e funcionários sobre como reconhecer, evitar e responder a ameaças cibernéticas. Alguns aspectos importantes incluem:

        - Identificação de sinais de possíveis ataques, como e-mails de phishing, sites falsos e solicitações de informações confidenciais.

- 2. Treinamento de Funcionários:

        - O treinamento de funcionários.

        - Treinamento regular em segurança cibernética para todos os funcionários, incluindo a conscientização sobre as últimas ameaças e técnicas de ataque.
        Simulações de phishing para testar a capacidade dos funcionários de identificar e relatar e-mails de phishing.
        Treinamento específico para funcionários em posições de alto risco, como administradores de sistemas, que têm acesso privilegiado a sistemas e dados sensíveis.

- 3. Políticas de Segurança Cibernética e Conformidade Regulatória:
        - Políticas de segurança cibernética são diretrizes e procedimentos estabelecidos por uma organização para proteger seus ativos digitais contra ameaças cibernéticas. Isso pode incluir:
            - Requisitos de senha forte, autenticação de dois fatores e práticas de segurança para proteger contas de usuário.
            - Políticas de acesso e controle de acesso que limitam quem pode acessar dados sensíveis e como esses dados podem ser utilizados.
            - Procedimentos para manter sistemas e software atualizados com as últimas correções de segurança e patches.
            - Conformidade com regulamentações de segurança cibernética, como o GDPR na União Europeia ou o HIPAA nos Estados Unidos, que estabelecem padrões mínimos de segurança e proteção de dados para organizações em determinados setores.

Em resumo, a prevenção de ataques cibernéticos envolve conscientização sobre segurança cibernética, treinamento de funcionários e implementação de políticas de segurança cibernética e conformidade regulatória. Ao educar os usuários, fortalecer as práticas de segurança e cumprir regulamentações, as organizações podem reduzir significativamente o risco de serem vítimas de ataques cibernéticos.
        
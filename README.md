# projeto-redes-4bim

Radar de Dispositivos da Rede

 Projeto 01 – UNIVAP

Descrição
O Radar de Dispositivos da Rede é um programa desenvolvido em linguagem C que simula o monitoramento da disponibilidade de computadores de um laboratório.

O programa permite cadastrar de 1 a 10 dispositivos, informar seus estados e calcular a porcentagem de disponibilidade.

Funcionalidades
- Validação da quantidade de dispositivos.
- Registro dos estados utilizando um vetor.
- Identificação de dispositivos ativos e inativos.
- Cálculo da porcentagem de disponibilidade.
- Geração de alerta quando existem dois ou mais dispositivos inativos.

Tecnologias e conceitos
- Linguagem C
- Vetores
- Variáveis e tipos de dados
- Estruturas condicionais (if/else)
- Estruturas de repetição (while e do...while)
- Operações aritméticas e lógicas

Testes realizados
1. Seis dispositivos: quatro ativos e dois inativos. Resultado: 66,7% de disponibilidade e alerta.
2. Três dispositivos: todos ativos. Resultado: 100% de disponibilidade e sem alerta.
3. Dois dispositivos: ambos inativos. Resultado: 0% de disponibilidade e alerta.

Limitações
O projeto é uma simulação local. Os estados são informados manualmente, sem comunicação com dispositivos reais, utilização de IP ou execução de ping.

Apresentação
O vídeo da apresentação está disponível na pasta `apresentacao`.

# 1611. Operações Mínimas de Um Bit para Zerar Inteiros

**Dificuldade:** Difícil

## Descrição

Dado um inteiro `n`, você deve transformá-lo em 0 usando as seguintes operações qualquer número de vezes:

1. **Operação 1:** Alterar o bit mais à direita (0º bit) na representação binária de `n`.
2. **Operação 2:** Alterar o i-ésimo bit na representação binária de `n` se o (i-1)-ésimo bit estiver definido como 1 e os bits (i-2)-ésimo até o 0º estiverem definidos como 0.

Retorne o número mínimo de operações para transformar `n` em 0.

## Exemplos

### Exemplo 1:

**Entrada:** `n = 3`

**Saída:** `2`

**Explicação:** 
- A representação binária de 3 é "11".
- "11" → "01" com a 2ª operação, já que o 0º bit é 1.
- "01" → "00" com a 1ª operação.

### Exemplo 2:

**Entrada:** `n = 6`

**Saída:** `4`

**Explicação:** 
- A representação binária de 6 é "110".
- "110" → "010" com a 2ª operação, já que o 1º bit é 1 e os bits do 0º ao 0º são 0.
- "010" → "011" com a 1ª operação.
- "011" → "001" com a 2ª operação, já que o 0º bit é 1.
- "001" → "000" com a 1ª operação.

## Restrições

- `0 <= n <= 10⁹`
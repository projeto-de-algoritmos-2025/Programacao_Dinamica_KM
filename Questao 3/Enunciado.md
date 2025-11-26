# 1526. Número Mínimo de Incrementos em Subarrays para Formar um Array Alvo

**Dificuldade:** Difícil

## Descrição

Você recebe um array de inteiros `target`. Você tem um array de inteiros `initial` do mesmo tamanho que `target` com todos os elementos inicialmente zerados.

Em uma operação, você pode escolher qualquer subarray de `initial` e incrementar cada valor em um.

Retorne o número mínimo de operações para formar o array `target` a partir de `initial`.

Os casos de teste são gerados de forma que a resposta caiba em um inteiro de 32 bits.

## Exemplos

### Exemplo 1:

**Entrada:** `target = [1,2,3,2,1]`

**Saída:** `3`

**Explicação:** 
Precisamos de pelo menos 3 operações para formar o array alvo a partir do array inicial.
- `[0,0,0,0,0]` incrementa 1 do índice 0 ao 4 (inclusivo).
- `[1,1,1,1,1]` incrementa 1 do índice 1 ao 3 (inclusivo).
- `[1,2,2,2,1]` incrementa 1 no índice 2.
- `[1,2,3,2,1]` array alvo formado.

### Exemplo 2:

**Entrada:** `target = [3,1,1,2]`

**Saída:** `4`

**Explicação:** 
```
[0,0,0,0] → [1,1,1,1] → [1,1,1,2] → [2,1,1,2] → [3,1,1,2]
```

### Exemplo 3:

**Entrada:** `target = [3,1,5,4,2]`

**Saída:** `7`

**Explicação:** 
```
[0,0,0,0,0] → [1,1,1,1,1] → [2,1,1,1,1] → [3,1,1,1,1] → 
[3,1,2,2,2] → [3,1,3,3,2] → [3,1,4,4,2] → [3,1,5,4,2]
```

## Restrições

- `1 <= target.length <= 10⁵`
- `1 <= target[i] <= 10⁵`
- A entrada é gerada de forma que a resposta caiba em um inteiro de 32 bits.
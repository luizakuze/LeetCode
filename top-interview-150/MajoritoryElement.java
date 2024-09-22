import java.util.HashMap;

class Solution {
    public int majorityElement(int[] nums) {
        HashMap<Integer, Integer> countMap = new HashMap<>();
        int majorityCount = nums.length / 2;

        // Contar a frequência de cada número no array nums
        for (int num : nums) {
            // Verificar se o número já está no HashMap
            if (countMap.get(num) == null) {
                countMap.put(num, 1); // Se não estiver, inicializa com 1
            } else {
                countMap.put(num, countMap.get(num) + 1); // Se já estiver, incrementa a contagem
            }

            // Verificar se o número já é o elemento majoritário
            if (countMap.get(num) > majorityCount) {
                return num;
            }
        }

        // Este retorno é necessário apenas para evitar erro de compilação
        return -1; // Embora o problema garanta que sempre haverá um elemento majoritário
    }
}

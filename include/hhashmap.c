#include "hhashmap.h"
#include "hmath.h"
#include "hstrlib.h"

const size_t hash1(char const *const key) {
  // polynomial rolling hash function.
  constexpr int p_factor = 256; // ascii
  size_t sum = 0;
  for (register int i = 0; key[i] != '\0'; i++)
    sum += key[i] * ipow(p_factor, i);
  return sum;
}

const size_t hash2(const size_t hash, const int iter) {
  // quadratic probing
  return hash + iter * iter;
}

[[nodiscard]] int searchHashMap(const char *const key,
                                const char *const *const hashmap,
                                const size_t size, size_t *const pos) {
  size_t pos_l = hash1(key) % size;
  for (register int i = 0; i < size; i++) {
    if (hashmap[pos_l][0] == '\0') // not found
      return 0;
    else if (!strcmp(hashmap[pos_l], key)) { // found
      *pos = pos_l;
      return 1;
    } else // occupied
      pos_l = hash2(pos_l, i + 1) % size;
  }
  return 0;
}

[[nodiscard]] int allocHashMap(char **const hashmap, char const *const key,
                               const size_t size, size_t *const pos) {
  size_t pos_l = hash1(key) % size;
  for (register int i = 0; i < size; i++) {
    if (hashmap[pos_l][0] == '\0') { // store
      strcpy(hashmap[pos_l], key);
      *pos = pos_l;
      return 1;
    } else // occupied
      pos_l = hash2(pos_l, i + 1) %
              size; // pos + 0^2 = pos; it'd be a useless cycle
  }
  return 0;
}

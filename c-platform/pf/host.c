#include <unistd.h>

int roc_getppid() { return getppid(); }

struct RocStr {
  char *bytes;
  size_t len;
  size_t capacity;
};

extern void roc__mainForHost_1_exposed_generic(struct RocStr *string);

int main() {

  struct RocStr str;
  roc__mainForHost_1_exposed_generic(&str);
}

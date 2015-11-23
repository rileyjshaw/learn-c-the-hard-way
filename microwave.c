#include <stdio.h>
#include <db.h>

void set_coordinates(store, idx) {
  int x, y;
  if(idx == 0) {
    x = 2;
    y = 4;
  } else {
    x = idx % 3;
    y = idx / 3;
  }
  store->x = x;
  store->y = y;

  return;
}

int main(int argc, char *argv[])
{
  int start, end, x, y, i;
  int *start_coords, *end_coords;
  int buttons[10];

  struct adv_db *db = adv_open("microwave", ADV_CREATE);

  // initialize nodes
  for(i = 0; i < 10; i++) {
    buttons[i] = adv_node_add(db);
  }

  for(start = 0; start < 10; start++) {
    set_coordinates(start_coords, start);
    for(end = 0; end < 10; end++) {
      set_coordinates(end_coords, end);
      x = abs(start_coords->x - end_coords->x);
      y = abs(start_coords->y - end_coords->y);

      adv_edge_add(db, buttons[start], buttons[end], sqrt(x^2 + y^2));
    }
  }

  adv_close(db);
  return 0;
}

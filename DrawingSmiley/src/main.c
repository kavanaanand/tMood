#include <pebble.h>
  
#define KEY_DATA1 11
#define KEY_DATA2 12 
#define KEY_DATA3 13
#define KEY_DATA4 14
#define KEY_DATA5 15
#define KEY_DATA6 16 
#define KEY_DATA7 17 
#define KEY_DATA8 18
#define KEY_DATA9 19
#define KEY_DATA10 20
#define KEY_DATA11 21 
#define KEY_DATA12 22 
#define KEY_DATA13 23
#define KEY_DATA14 24
#define KEY_DATA15 25
#define KEY_DATA16 26  

typedef enum sentiment_value {
	POSITIVE, 
	NEGATIVE,     
	NEUTRAL   
}
SENTIMENT;

static Window *s_main_window;
static Layer *s_smiley_layer;
static Layer *s_smiley_layer1;
static Layer *s_smiley_layer2;
static Layer *s_smiley_layer3;
static Layer *s_smiley_layer4;
static Layer *s_smiley_layer5;
static Layer *s_smiley_layer6;
static Layer *s_smiley_layer7;
static Layer *s_smiley_layer8;
static Layer *s_smiley_layer9;
static Layer *s_smiley_layer10;
static Layer *s_smiley_layer11;
static Layer *s_smiley_layer12;
static Layer *s_smiley_layer13;
static Layer *s_smiley_layer14;
static Layer *s_smiley_layer15;
static Layer *s_smiley_layer16;
static TextLayer *s_output_layer;
SENTIMENT sent_val1;
SENTIMENT sent_val2;
SENTIMENT sent_val3;
SENTIMENT sent_val4;
SENTIMENT sent_val5;
SENTIMENT sent_val6;
SENTIMENT sent_val7;
SENTIMENT sent_val8;
SENTIMENT sent_val9;
SENTIMENT sent_val10;
SENTIMENT sent_val11;
SENTIMENT sent_val12;
SENTIMENT sent_val13;
SENTIMENT sent_val14;
SENTIMENT sent_val15;
SENTIMENT sent_val16;

static void smiley_update_proc(Layer *this_layer, GContext *ctx) {

  SENTIMENT sent_val=NEUTRAL;
  if(this_layer == s_smiley_layer1)
    sent_val = sent_val1;
  else if(this_layer == s_smiley_layer2)
    sent_val = sent_val2;
  else if(this_layer == s_smiley_layer3)
    sent_val = sent_val3;
  else if(this_layer == s_smiley_layer4)
    sent_val = sent_val4;
  else if(this_layer == s_smiley_layer5)
    sent_val = sent_val5;
  else if(this_layer == s_smiley_layer6)
    sent_val = sent_val6;
  else if(this_layer == s_smiley_layer7)
    sent_val = sent_val7;
  else if(this_layer == s_smiley_layer8)
    sent_val = sent_val8;
  else if(this_layer == s_smiley_layer9)
    sent_val = sent_val9;
  else if(this_layer == s_smiley_layer10)
    sent_val = sent_val10;
  else if(this_layer == s_smiley_layer11)
    sent_val = sent_val11;
  else if(this_layer == s_smiley_layer12)
    sent_val = sent_val12;
  else if(this_layer == s_smiley_layer13)
    sent_val = sent_val13;
  else if(this_layer == s_smiley_layer14)
    sent_val = sent_val14;
  else if(this_layer == s_smiley_layer15)
    sent_val = sent_val15;
  else if(this_layer == s_smiley_layer16)
    sent_val = sent_val16;
  
  graphics_draw_circle(ctx, GPoint(18, 18), 16);
  graphics_fill_circle(ctx, GPoint(12,12), 2);
  graphics_fill_circle(ctx, GPoint(24,12), 2);
  graphics_draw_line(ctx, GPoint(18,16), GPoint(18,20));
  
  if(sent_val == POSITIVE){
    for(int x=9,y=22;x<=18;x++){
      graphics_draw_pixel(ctx, GPoint(x,y));
      if(x%2!=0 && x<=16)
        y++;
    }
    for(int x=27,y=22;x>=18;x--){
     graphics_draw_pixel(ctx, GPoint(x,y));
     if(x%2!=0 && x>=20)
      y++;
   }
  }else if(sent_val == NEGATIVE){
    for(int x=9,y=27;x<=18;x++){
      graphics_draw_pixel(ctx, GPoint(x,y));
      if(x%2!=0 && x<=16)
        y--;
    }
    for(int x=27,y=27;x>=18;x--){
     graphics_draw_pixel(ctx, GPoint(x,y));
     if(x%2!=0 && x>=20)
      y--;
   }
  }else{
    graphics_draw_line(ctx, GPoint(9,22), GPoint(27,22));
  }
  
  // Big Smiley Code
  
//   graphics_draw_circle(ctx, GPoint(75, 75), 30);
//   graphics_fill_circle(ctx, GPoint(62,62), 4);
//   graphics_fill_circle(ctx, GPoint(88,62), 4);
//   graphics_draw_line(ctx, GPoint(75,72), GPoint(75,78));
//   if(sent_val == POSITIVE){
//     for(int x=58,y=88;x<=75;x++){
//       graphics_draw_pixel(ctx, GPoint(x,y));
//       if(x%2!=0 && x<=71)
//         y++;
//     }
//     for(int x=92,y=88;x>=75;x--){
//      graphics_draw_pixel(ctx, GPoint(x,y));
//      if(x%2!=0 && x>=79)
//       y++;
//    }
//   }else if(sent_val == NEGATIVE){
//     for(int x=58,y=90;x<=75;x++){
//       graphics_draw_pixel(ctx, GPoint(x,y));
//       if(x%2!=0 && x<=71)
//         y--;
//     }
//     for(int x=92,y=90;x>=75;x--){
//      graphics_draw_pixel(ctx, GPoint(x,y));
//      if(x%2!=0 && x>=79)
//       y--;
//    }
//   }else{
//     graphics_draw_line(ctx, GPoint(58,88), GPoint(92,88));
//   }
  
}

void hideLayers(){
  layer_set_hidden(s_smiley_layer1,true); 
  layer_set_hidden(s_smiley_layer2,true); 
  layer_set_hidden(s_smiley_layer3,true); 
  layer_set_hidden(s_smiley_layer4,true); 
  layer_set_hidden(s_smiley_layer5,true); 
  layer_set_hidden(s_smiley_layer6,true); 
  layer_set_hidden(s_smiley_layer7,true); 
  layer_set_hidden(s_smiley_layer8,true); 
  layer_set_hidden(s_smiley_layer9,true); 
  layer_set_hidden(s_smiley_layer10,true); 
  layer_set_hidden(s_smiley_layer11,true); 
  layer_set_hidden(s_smiley_layer12,true); 
  layer_set_hidden(s_smiley_layer13,true); 
  layer_set_hidden(s_smiley_layer14,true); 
  layer_set_hidden(s_smiley_layer15,true); 
  layer_set_hidden(s_smiley_layer16,true); 
}

void unhideLayers(){
  layer_set_hidden(s_smiley_layer1,false); 
  layer_set_hidden(s_smiley_layer2,false);
  layer_set_hidden(s_smiley_layer3,false); 
  layer_set_hidden(s_smiley_layer4,false); 
  layer_set_hidden(s_smiley_layer5,false); 
  layer_set_hidden(s_smiley_layer6,false); 
  layer_set_hidden(s_smiley_layer7,false); 
  layer_set_hidden(s_smiley_layer8,false); 
  layer_set_hidden(s_smiley_layer9,false); 
  layer_set_hidden(s_smiley_layer10,false); 
  layer_set_hidden(s_smiley_layer11,false); 
  layer_set_hidden(s_smiley_layer12,false); 
  layer_set_hidden(s_smiley_layer13,false); 
  layer_set_hidden(s_smiley_layer14,false); 
  layer_set_hidden(s_smiley_layer15,false); 
  layer_set_hidden(s_smiley_layer16,false); 
  
}

void createLayers(){
  s_smiley_layer1 = layer_create(GRect(0, 0, 36, 36));
  layer_set_update_proc(s_smiley_layer1, smiley_update_proc);
  s_smiley_layer2 = layer_create(GRect(36, 0,36,36));
  layer_set_update_proc(s_smiley_layer2, smiley_update_proc);
  s_smiley_layer3 = layer_create(GRect(72, 0,36,36));
  layer_set_update_proc(s_smiley_layer3, smiley_update_proc);
  s_smiley_layer4 = layer_create(GRect(108, 0,36,36));
  layer_set_update_proc(s_smiley_layer4, smiley_update_proc);
  s_smiley_layer5 = layer_create(GRect(0, 36,36,36));
  layer_set_update_proc(s_smiley_layer5, smiley_update_proc);
  s_smiley_layer6 = layer_create(GRect(36, 36,36,36));
  layer_set_update_proc(s_smiley_layer6, smiley_update_proc);
  s_smiley_layer7 = layer_create(GRect(72, 36,36,36));
  layer_set_update_proc(s_smiley_layer7, smiley_update_proc);
  s_smiley_layer8 = layer_create(GRect(108, 36,36,36));
  layer_set_update_proc(s_smiley_layer8, smiley_update_proc);
  s_smiley_layer9 = layer_create(GRect(0, 72,36,36));
  layer_set_update_proc(s_smiley_layer9, smiley_update_proc);
  s_smiley_layer10 = layer_create(GRect(36, 72,36,36));
  layer_set_update_proc(s_smiley_layer10, smiley_update_proc);
  s_smiley_layer11 = layer_create(GRect(72, 72,36,36));
  layer_set_update_proc(s_smiley_layer11, smiley_update_proc);
  s_smiley_layer12 = layer_create(GRect(108, 72,36,36));
  layer_set_update_proc(s_smiley_layer12, smiley_update_proc);
  s_smiley_layer13 = layer_create(GRect(0, 108,36,36));
  layer_set_update_proc(s_smiley_layer13, smiley_update_proc);
  s_smiley_layer14 = layer_create(GRect(36, 108,36,36));
  layer_set_update_proc(s_smiley_layer14, smiley_update_proc);
  s_smiley_layer15 = layer_create(GRect(72, 108,36,36));
  layer_set_update_proc(s_smiley_layer15, smiley_update_proc);
  s_smiley_layer16 = layer_create(GRect(108, 108,36,36));
  layer_set_update_proc(s_smiley_layer16, smiley_update_proc);
  

  layer_add_child(s_smiley_layer,s_smiley_layer1);
  layer_add_child(s_smiley_layer,s_smiley_layer2);
  layer_add_child(s_smiley_layer,s_smiley_layer3);
  layer_add_child(s_smiley_layer,s_smiley_layer4);
  layer_add_child(s_smiley_layer,s_smiley_layer5);
  layer_add_child(s_smiley_layer,s_smiley_layer6);
  layer_add_child(s_smiley_layer,s_smiley_layer7);
  layer_add_child(s_smiley_layer,s_smiley_layer8);
  layer_add_child(s_smiley_layer,s_smiley_layer9);
  layer_add_child(s_smiley_layer,s_smiley_layer10);
  layer_add_child(s_smiley_layer,s_smiley_layer11);
  layer_add_child(s_smiley_layer,s_smiley_layer12);
  layer_add_child(s_smiley_layer,s_smiley_layer13);
  layer_add_child(s_smiley_layer,s_smiley_layer14);
  layer_add_child(s_smiley_layer,s_smiley_layer15);
  layer_add_child(s_smiley_layer,s_smiley_layer16);
  
}


static void inbox_received_callback(DictionaryIterator *iterator, void *context) {
  APP_LOG(APP_LOG_LEVEL_INFO, "Message received!");
  // Get the first pair
  Tuple *t = dict_read_first(iterator);
  int c = 1;
  SENTIMENT sentiment_value;
  // Process all pairs present
  while(t != NULL) {
    // Process this pair's key
    static char s_buffer[64];
    switch (t->key) {
      case KEY_DATA1:
      case KEY_DATA2:
      case KEY_DATA3:
      case KEY_DATA4:
      case KEY_DATA5:
      case KEY_DATA6:
      case KEY_DATA7:
      case KEY_DATA8:
      case KEY_DATA9:
      case KEY_DATA10:
      case KEY_DATA11:
      case KEY_DATA12:
      case KEY_DATA13:
      case KEY_DATA14:
      case KEY_DATA15:
      case KEY_DATA16:
//          snprintf(s_buffer, sizeof(s_buffer), "Received '%s'", t->value->cstring);
//          text_layer_set_text(s_output_layer, s_buffer);
        if(strcmp(t->value->cstring,"positive")==0)
           sentiment_value = POSITIVE;
        else if(strcmp(t->value->cstring,"negative")==0)
          sentiment_value = NEGATIVE;
        else
          sentiment_value = NEUTRAL;
        if(c == 1)
          sent_val1 = sentiment_value;
        else if(c==2)
          sent_val2 = sentiment_value;
        else if(c==3)
          sent_val3 = sentiment_value;
        else if(c==4)
          sent_val4 = sentiment_value;
        else if(c==5)
          sent_val5 = sentiment_value;
        else if(c==6)
          sent_val6 = sentiment_value;
        else if(c==7)
          sent_val7 = sentiment_value;
        else if(c==8)
          sent_val8 = sentiment_value;
        else if(c==9)
          sent_val9 = sentiment_value;
        else if(c==10)
          sent_val10 = sentiment_value;
        else if(c==11)
          sent_val11 = sentiment_value;
        else if(c==12)
          sent_val12 = sentiment_value;
        else if(c==13)
          sent_val13 = sentiment_value;
        else if(c==14)
          sent_val14 = sentiment_value;
        else if(c==15)
          sent_val15 = sentiment_value;
        else if(c==16)
          sent_val16 = sentiment_value;
        else
          break;
        c++;
        layer_set_hidden(s_smiley_layer,false); 
        unhideLayers();
        layer_set_hidden((struct Layer *)s_output_layer,true); 
        break;
    }
    // Get next pair, if any
    t = dict_read_next(iterator);
  }
}

static void inbox_dropped_callback(AppMessageResult reason, void *context) {
  APP_LOG(APP_LOG_LEVEL_ERROR, "Message dropped!");
}

static void outbox_failed_callback(DictionaryIterator *iterator, AppMessageResult reason, void *context) {
  APP_LOG(APP_LOG_LEVEL_ERROR, "Outbox send failed!");
}

static void outbox_sent_callback(DictionaryIterator *iterator, void *context) {
  APP_LOG(APP_LOG_LEVEL_INFO, "Outbox send success!");
}

static void main_window_load(Window *window) {
  Layer *window_layer = window_get_root_layer(window);
  GRect window_bounds = layer_get_bounds(window_layer);
  
//   sent_val = NEUTRAL;
  
  s_output_layer = text_layer_create(GRect(5, 0, window_bounds.size.w - 5, window_bounds.size.h));
  text_layer_set_font(s_output_layer, fonts_get_system_font(FONT_KEY_GOTHIC_24));
  text_layer_set_text(s_output_layer, "Waiting...");
  text_layer_set_overflow_mode(s_output_layer, GTextOverflowModeWordWrap);
  layer_add_child(window_layer, text_layer_get_layer(s_output_layer)); 
  
  s_smiley_layer = layer_create(GRect(0, 0, window_bounds.size.w, window_bounds.size.h));
//   layer_set_update_proc(s_smiley_layer, smiley_update_proc);
  layer_insert_above_sibling (s_smiley_layer,(struct Layer *)s_output_layer);
  layer_set_hidden(s_smiley_layer,true); 
  createLayers();
  hideLayers();       
}

static void main_window_unload(Window *window) {
  layer_destroy(s_smiley_layer1);
  layer_destroy(s_smiley_layer2);
  layer_destroy(s_smiley_layer3);
  layer_destroy(s_smiley_layer4);
  layer_destroy(s_smiley_layer5);
  layer_destroy(s_smiley_layer6);
  layer_destroy(s_smiley_layer7);
  layer_destroy(s_smiley_layer8);
  layer_destroy(s_smiley_layer9);
  layer_destroy(s_smiley_layer10);
  layer_destroy(s_smiley_layer11);
  layer_destroy(s_smiley_layer12);
  layer_destroy(s_smiley_layer13);
  layer_destroy(s_smiley_layer14);
  layer_destroy(s_smiley_layer15);
  layer_destroy(s_smiley_layer16);
  layer_destroy(s_smiley_layer);
  text_layer_destroy(s_output_layer);
}

static void init() {
  // Create main Window element and assign to pointer
  s_main_window = window_create();

  // Set handlers to manage the elements inside the Window
  window_set_window_handlers(s_main_window, (WindowHandlers) {
    .load = main_window_load,
    .unload = main_window_unload
  });
  
  app_message_register_inbox_received(inbox_received_callback);
  app_message_register_inbox_dropped(inbox_dropped_callback);
  app_message_register_outbox_failed(outbox_failed_callback);
  app_message_register_outbox_sent(outbox_sent_callback);
  
  app_message_open(app_message_inbox_size_maximum(), app_message_outbox_size_maximum());


  // Show the Window on the watch, with animated=true
  window_stack_push(s_main_window, true);
}

static void deinit() {
  window_destroy(s_main_window);
}

int main(void) {
  init();
  app_event_loop();
  deinit();
}

#include <gtk/gtk.h>
#include <stdlib.h>

GtkEntry *display;



void on_botao_clicked(GtkWidget *widget, gpointer data){
gtk_main_quit();
}
void on_botao_reset_clicked(GtkWidget *widget, gpointer data){
gtk_main_quit();
}
void on_botao_raiz_quadrada_clicked(GtkWidget *widget, gpointer data){
gtk_main_quit();
}
void on_botao_divisao_clicked(GtkWidget *widget, gpointer data){
gtk_main_quit();
}
void on_botao_multiplicacao_clicked(GtkWidget *widget, gpointer data){
gtk_main_quit();
}
void on_botao_subtracao_clicked(GtkWidget *widget, gpointer data){
gtk_main_quit();
}
void on_botao_soma_clicked(GtkWidget *widget, gpointer data){
gtk_main_quit();
}
void on_botao_igual_clicked(GtkWidget *widget, gpointer data){
gtk_main_quit();
}
void on_botao_ponto_clicked(GtkWidget *widget, gpointer data){
gtk_main_quit();
}
void on_botao_porcentagem_clicked(GtkWidget *widget, gpointer data){
gtk_main_quit();
}

void on_main_window_destroy(GtkWidget *widget, gpointer data){
  gtk_main_quit();
}

int main(int argc, char *argv[]){

  gtk_init(&argc, &argv);

  GtkBuilder *builder = gtk_builder_new_from_file("ui.glade");

  gtk_builder_add_callback_symbols(builder,
    "on_botao_clicked", G_CALLBACK(on_botao_clicked),
    "on_main_window_destroy", G_CALLBACK(on_main_window_destroy),
    "on_botao_reset_clicked", G_CALLBACK(on_botao_reset_clicked),
    "on_botao_raiz_quadrada_clicked", G_CALLBACK(on_botao_raiz_quadrada_clicked),
    "on_botao_divisao_clicked", G_CALLBACK(on_botao_divisao_clicked),
    "on_botao_multiplicacao_clicked", G_CALLBACK(on_botao_multiplicacao_clicked),
    "on_botao_subtracao_clicked", G_CALLBACK(on_botao_subtracao_clicked),
    "on_botao_soma_clicked", G_CALLBACK(on_botao_soma_clicked),
    "on_botao_igual_clicked", G_CALLBACK(on_botao_igual_clicked),
    "on_botao_ponto_clicked", G_CALLBACK(on_botao_ponto_clicked),
    "on_botao_porcentagem_clicked", G_CALLBACK(on_botao_porcentagem_clicked),
    NULL);

  gtk_builder_connect_signals(builder, NULL);

  display = GTK_ENTRY(gtk_builder_get_object(builder, "display"));
  GtkWidget *window = GTK_WIDGET(gtk_builder_get_object(builder, "main_window"));

  gtk_widget_show_all(window);
  gtk_main();

  return 0;
}

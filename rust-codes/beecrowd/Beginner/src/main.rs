use std::io;


// Insere a pasta code puxando o arquivo "mod.rs". Neste arquivo tem o ponteiro de cada um dos
// códigos.
mod codes;

fn main() {
    println!("Seja bem-vindo aos códigos Nível 1 da Beecrowd no Rust");
    let mut quit = false;
    while !quit{
        println!("Digite o número do exercício que você deseja executar: ");    
        let mut code = String::new();
        io::stdin()
            .read_line(&mut code)
            .expect("Falhamos em ler o conteúdo");
        let code: u32 = match code.trim().parse() {
            Ok(num) => num,
            Err(_) => {
                println!("Por favor, digite somente o número\nQualquer coisa além disso, não será aceito\n\n");
                continue;
            },
        };
        if code == 1000 {
            codes::code_1000::hello_world();
            quit = want_to_stop_it();
        }
        else{
            println!("Você inseriu um código não existente, por favor, tente novamente");
            continue;
        }
    }
}

fn want_to_stop_it() -> bool{
    println!("Deseja parar o código?\n\n1. Sim, parar\n0. Não, continuar");
    let mut answer = String::new();
    io::stdin()
        .read_line(&mut answer)
        .expect("Failed to read line");
    let _answer: u32 = match answer.trim().parse(){
        Ok(num) => num,
        Err(_) => {
            print!("You inserted no number, stopping the code");
            0
        }
    };
    if _answer == 1 {
        true
    }else if _answer == 0 {
        false
    }
    else {
        println!("Digite um número válido (1 e 0)");
        return want_to_stop_it()
    }
}

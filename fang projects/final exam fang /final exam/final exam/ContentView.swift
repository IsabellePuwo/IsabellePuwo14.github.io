//
//  ContentView.swift
//  final exam
//
//  Created by Isabelle Puwo on 5/15/23.
//

import SwiftUI

struct ContentView: View {
    @Binding var document: final_examDocument

    var body: some View {
        TextEditor(text: $document.text)
    }
}

struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        ContentView(document: .constant(final_examDocument()))
    }
}

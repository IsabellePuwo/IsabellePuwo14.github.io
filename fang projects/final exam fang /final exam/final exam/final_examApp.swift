//
//  final_examApp.swift
//  final exam
//
//  Created by Isabelle Puwo on 5/15/23.
//

import SwiftUI

@main
struct final_examApp: App {
    var body: some Scene {
        DocumentGroup(newDocument: final_examDocument()) { file in
            ContentView(document: file.$document)
        }
    }
}

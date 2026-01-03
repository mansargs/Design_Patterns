#include <iostream>
#include "Creator/PdfDocumentFactory.hpp"
#include "Creator/WordDocumentFactory.hpp"
#include "Creator/HtmlDocumentFactory.hpp"


int main()
{
    DocumentFactory* factory;
    Document* doc;

    factory = new PdfDocumentFactory();
    doc = factory->createDocument();
    doc->print();
    delete doc;
    delete factory;

    factory = new WordDocumentFactory();
    doc = factory->createDocument();
    doc->print();
    delete doc;
    delete factory;

    factory = new HtmlDocumentFactory();
    doc = factory->createDocument();
    doc->print();
    delete doc;
    delete factory;

    return 0;
}
